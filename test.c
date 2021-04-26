#ifndef _CD_DEF_H
#define _CD_DEF_H

//*************************************************//
//*     電文構造体 			  	          		  *//
//*************************************************//
// 要求電文：各項目は最大サイズ+終端（1バイト）
typedef struct {
	char cID                [ID_LEN                 + 1]; // ログイン（加盟店ＩＤ（１６）＋接続ＩＤ（３２））
	char cPass              [PASSWORD_LEN           + 1]; // 接続パスワード
	char cDestination       [DESTINATION_LEN        + 1]; // 接続先情報
	char cPAN               [PAN_LEN                + 1]; // 主契約者番号、カード番号
	char cAmount            [AMOUNT_LEN             + 1]; // 取引金額、取引金額（返金金額）
	char cTransDate         [TRANSDATE_LEN          + 1]; // 伝送日時
	char cSTAN              [STAN_LEN               + 1]; // システムトレース監査番号
	char cMarchantRetailerID[MARCHANTRETAILERID_LEN + 1]; // マーチャントID  
	char cTermID            [TERMID_LEN             + 1]; // 端末ＩＤ、カード取扱者
	char cRetailer          [RETAILER_LEN           + 1]; // 識別コード、カード取扱者
	char cCurrency          [CURRENCY_LEN           + 1]; // CurrencyCode
	char cJan               [JAN_LEN                + 1]; // JANコード
	char cOriginalTradeID   [ORIGINALTRADEID_LEN    + 1]; // 国内予約域（元取引ID）
	char cOriginalTotal     [ORIGINALTOTAL_LEN      + 1]; // 国内予約域（元取引総額）
	char cProcessingCode    [PROCESSINGCODE_LEN     + 1]; // プロセッシングコード
	char cBranchName        [BRANCHNAME_LEN         + 1]; // 店舗名（ＵＴＦ８に変換）   
} CD_REQ;

// 応答電文：各項目は最大サイズ+終端（1バイト）
typedef struct {
	char cResponseCode      [RESPNSECODE_LEN        + 1]; // レスポンスコード 
	char cAuthID            [AUTHID_LEN             + 1]; // 受付番号 
	char cResultCode        [RESULTCODE_LEN         + 1]; // 応答ステータス 
	char cErrCode           [ERRCODE_LEN            + 1]; // エラーメッセージ 
	char cRecall            [RECALL_LEN             + 1]; // 再送フラグ
	char cDestCode          [DESTCODE_LEN           + 1]; // 接続先コード             
	char cDestName          [DESTNAME_LEN           + 1]; // 接続先情報（ＳＨＩＦＴ－ＪＩＳに変換）             
} CD_RES;

#endif

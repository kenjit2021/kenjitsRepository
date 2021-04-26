#ifndef _CD_DEF_H
#define _CD_DEF_H

//*************************************************//
//*     �d���\���� 			  	          		  *//
//*************************************************//
// �v���d���F�e���ڂ͍ő�T�C�Y+�I�[�i1�o�C�g�j
typedef struct {
	char cID                [ID_LEN                 + 1]; // ���O�C���i�����X�h�c�i�P�U�j�{�ڑ��h�c�i�R�Q�j�j
	char cPass              [PASSWORD_LEN           + 1]; // �ڑ��p�X���[�h
	char cDestination       [DESTINATION_LEN        + 1]; // �ڑ�����
	char cPAN               [PAN_LEN                + 1]; // ��_��Ҕԍ��A�J�[�h�ԍ�
	char cAmount            [AMOUNT_LEN             + 1]; // ������z�A������z�i�ԋ����z�j
	char cTransDate         [TRANSDATE_LEN          + 1]; // �`������
	char cSTAN              [STAN_LEN               + 1]; // �V�X�e���g���[�X�č��ԍ�
	char cMarchantRetailerID[MARCHANTRETAILERID_LEN + 1]; // �}�[�`�����gID  
	char cTermID            [TERMID_LEN             + 1]; // �[���h�c�A�J�[�h�戵��
	char cRetailer          [RETAILER_LEN           + 1]; // ���ʃR�[�h�A�J�[�h�戵��
	char cCurrency          [CURRENCY_LEN           + 1]; // CurrencyCode
	char cJan               [JAN_LEN                + 1]; // JAN�R�[�h
	char cOriginalTradeID   [ORIGINALTRADEID_LEN    + 1]; // �����\���i�����ID�j
	char cOriginalTotal     [ORIGINALTOTAL_LEN      + 1]; // �����\���i��������z�j
	char cProcessingCode    [PROCESSINGCODE_LEN     + 1]; // �v���Z�b�V���O�R�[�h
	char cBranchName        [BRANCHNAME_LEN         + 1]; // �X�ܖ��i�t�s�e�W�ɕϊ��j   
} CD_REQ;

// �����d���F�e���ڂ͍ő�T�C�Y+�I�[�i1�o�C�g�j
typedef struct {
	char cResponseCode      [RESPNSECODE_LEN        + 1]; // ���X�|���X�R�[�h 
	char cAuthID            [AUTHID_LEN             + 1]; // ��t�ԍ� 
	char cResultCode        [RESULTCODE_LEN         + 1]; // �����X�e�[�^�X 
	char cErrCode           [ERRCODE_LEN            + 1]; // �G���[���b�Z�[�W 
	char cRecall            [RECALL_LEN             + 1]; // �đ��t���O
	char cDestCode          [DESTCODE_LEN           + 1]; // �ڑ���R�[�h             
	char cDestName          [DESTNAME_LEN           + 1]; // �ڑ�����i�r�g�h�e�s�|�i�h�r�ɕϊ��j             
} CD_RES;

#endif

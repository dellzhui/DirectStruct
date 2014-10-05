/* It had generated by DirectStruct v1.1.0 */
#include "IDL_BankTransaction.dsc.h"

int DSCINIT_BankTransaction( BankTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(BankTransaction) );
	pst->version = 1 ;
		pst->ResponseHeader.response_code = 0 ;
		strcpy( pst->ResponseHeader.response_desc , "OK" );
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				pst->QueryTransactionDetails.AddonMessages._AddonMessage_size = 3 ;
				}
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_size = 10 ;
				}
	return 0;
}

int DSCNETORDER_BankTransaction( BankTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
		pst->ResponseHeader.trans_jnlsno=(int)htonl((unsigned int)(pst->ResponseHeader.trans_jnlsno));
		pst->ResponseHeader.response_code=(int)htonl((unsigned int)(pst->ResponseHeader.response_code));
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				}
			pst->QueryTransactionDetails.TransactionDetailTitle.page_no=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_no));
			pst->QueryTransactionDetails.TransactionDetailTitle.page_size=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_size));
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				__HTONF(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount);
				}
	return 0;
}

int DSCHOSTORDER_BankTransaction( BankTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
		pst->ResponseHeader.trans_jnlsno=(int)ntohl((unsigned int)(pst->ResponseHeader.trans_jnlsno));
		pst->ResponseHeader.response_code=(int)ntohl((unsigned int)(pst->ResponseHeader.response_code));
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				}
			pst->QueryTransactionDetails.TransactionDetailTitle.page_no=(short)ntohs((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_no));
			pst->QueryTransactionDetails.TransactionDetailTitle.page_size=(short)ntohs((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_size));
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				__NTOHF(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount);
				}
	return 0;
}

int DSCSERIALIZE_COMPRESS_BankTransaction( BankTransaction *pst , char *buf , int *p_len )
{
	char	*ptr = buf ;
	int	len = 0 ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	/* version */
	(*ptr) = pst->version ;
	len++; ptr++;
		/* transaction_code */
		{
		unsigned int size=strlen(pst->ResponseHeader.transaction_code);
		COMPRESS_UINT4( size , ptr , len )
		memcpy( ptr , pst->ResponseHeader.transaction_code , size );
		len+=size; ptr+=size;
		}
		/* trans_jnlsno */
		COMPRESS_INT4( pst->ResponseHeader.trans_jnlsno , ptr , len )
		/* response_code */
		COMPRESS_INT4( pst->ResponseHeader.response_code , ptr , len )
		/* response_desc */
		{
		unsigned int size=strlen(pst->ResponseHeader.response_desc);
		COMPRESS_UINT4( size , ptr , len )
		memcpy( ptr , pst->ResponseHeader.response_desc , size );
		len+=size; ptr+=size;
		}
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				/* message_text */
				{
				unsigned int size=strlen(pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text);
				COMPRESS_UINT4( size , ptr , len )
				memcpy( ptr , pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text , size );
				len+=size; ptr+=size;
				}
				}
			/* title_text */
			{
			unsigned int size=strlen(pst->QueryTransactionDetails.TransactionDetailTitle.title_text);
			COMPRESS_UINT4( size , ptr , len )
			memcpy( ptr , pst->QueryTransactionDetails.TransactionDetailTitle.title_text , size );
			len+=size; ptr+=size;
			}
			/* page_no */
			{ short s; s=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_no)); memcpy( ptr , (char*)&s , 2 ); }
			len+=2; ptr+=2;
			/* page_size */
			{ short s; s=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_size)); memcpy( ptr , (char*)&s , 2 ); }
			len+=2; ptr+=2;
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				/* trans_date */
				{
				unsigned int size=strlen(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date);
				COMPRESS_UINT4( size , ptr , len )
				memcpy( ptr , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date , size );
				len+=size; ptr+=size;
				}
				/* trans_time */
				{
				unsigned int size=strlen(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time);
				COMPRESS_UINT4( size , ptr , len )
				memcpy( ptr , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time , size );
				len+=size; ptr+=size;
				}
				/* outlet_id */
				{
				unsigned int size=strlen(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id);
				COMPRESS_UINT4( size , ptr , len )
				memcpy( ptr , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id , size );
				len+=size; ptr+=size;
				}
				/* card_no */
				{
				unsigned int size=strlen(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no);
				COMPRESS_UINT4( size , ptr , len )
				memcpy( ptr , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no , size );
				len+=size; ptr+=size;
				}
				/* trans_amount */
				{ float f=pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount; __HTONF(f); memcpy( ptr , (char*)&f , 4 ); }
				len+=4; ptr+=4;
				}
	
	if( p_len ) (*p_len) = len ;
	
	return 0;
}

int DSCDESERIALIZE_COMPRESS_BankTransaction( char *buf , int *p_len , BankTransaction *pst )
{
	char	*ptr = buf ;
	int	len = 0 ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	/* version */
	pst->version = (*ptr) ;
	len++; ptr++;
		/* transaction_code */
		{
		unsigned int size ;
		UNCOMPRESS_UINT4( ptr , len , size )
		memcpy( pst->ResponseHeader.transaction_code , ptr , size );
		len+=size; ptr+=size;
		}
		/* trans_jnlsno */
		UNCOMPRESS_INT4( ptr , len , pst->ResponseHeader.trans_jnlsno )
		/* response_code */
		UNCOMPRESS_INT4( ptr , len , pst->ResponseHeader.response_code )
		/* response_desc */
		{
		unsigned int size ;
		UNCOMPRESS_UINT4( ptr , len , size )
		memcpy( pst->ResponseHeader.response_desc , ptr , size );
		len+=size; ptr+=size;
		}
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				/* message_text */
				{
				unsigned int size ;
				UNCOMPRESS_UINT4( ptr , len , size )
				memcpy( pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text , ptr , size );
				len+=size; ptr+=size;
				}
				}
			/* title_text */
			{
			unsigned int size ;
			UNCOMPRESS_UINT4( ptr , len , size )
			memcpy( pst->QueryTransactionDetails.TransactionDetailTitle.title_text , ptr , size );
			len+=size; ptr+=size;
			}
			/* page_no */
			memcpy( (char*)&(pst->QueryTransactionDetails.TransactionDetailTitle.page_no) , ptr , 2 ); pst->QueryTransactionDetails.TransactionDetailTitle.page_no=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_no));
			len+=2; ptr+=2;
			/* page_size */
			memcpy( (char*)&(pst->QueryTransactionDetails.TransactionDetailTitle.page_size) , ptr , 2 ); pst->QueryTransactionDetails.TransactionDetailTitle.page_size=(short)htons((unsigned short)(pst->QueryTransactionDetails.TransactionDetailTitle.page_size));
			len+=2; ptr+=2;
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				/* trans_date */
				{
				unsigned int size ;
				UNCOMPRESS_UINT4( ptr , len , size )
				memcpy( pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date , ptr , size );
				len+=size; ptr+=size;
				}
				/* trans_time */
				{
				unsigned int size ;
				UNCOMPRESS_UINT4( ptr , len , size )
				memcpy( pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time , ptr , size );
				len+=size; ptr+=size;
				}
				/* outlet_id */
				{
				unsigned int size ;
				UNCOMPRESS_UINT4( ptr , len , size )
				memcpy( pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id , ptr , size );
				len+=size; ptr+=size;
				}
				/* card_no */
				{
				unsigned int size ;
				UNCOMPRESS_UINT4( ptr , len , size )
				memcpy( pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no , ptr , size );
				len+=size; ptr+=size;
				}
				/* trans_amount */
				memcpy( (char*)&(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount) , ptr , 4 ); __NTOHF(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount);
				len+=4; ptr+=4;
				}
	
	if( p_len ) (*p_len) = len ;
	
	return 0;
}

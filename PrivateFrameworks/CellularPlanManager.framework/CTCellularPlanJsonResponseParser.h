/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanJsonResponseParser : NSObject {
}

+ (BOOL)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(BOOL*)arg2 responseCode:(int*)arg3 responseText:(id*)arg4 buddyML:(id*)arg5 error:(id*)arg6;
+ (BOOL)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(BOOL*)arg2 iccid:(id*)arg3 responseCode:(int*)arg4 responseText:(id*)arg5 error:(id*)arg6;
+ (BOOL)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id*)arg2 error:(id*)arg3;
+ (id)sessionIdFromJsonData:(id)arg1;
+ (id)sessionIdFromObject:(id)arg1;

@end

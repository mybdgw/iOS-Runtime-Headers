/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CKComposeRecipientSelectionControllerDelegate>, NSArray, NSString;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate> {
    id _sendBlock;
}

@property(copy,readonly) NSString * debugDescription;
@property <CKComposeRecipientSelectionControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSArray * expandedRecipients;
@property(readonly) unsigned int hash;
@property(retain,readonly) NSArray * proposedRecipients;
@property(copy) id sendBlock;
@property(readonly) Class superclass;

- (void)_updateBackfillForNewRecipients;
- (void)addRecipient:(id)arg1;
- (BOOL)alwaysShowSearchResultsTable;
- (void)atomizeAndInvokeBlock:(id)arg1;
- (void)atomizeAndSendTimeoutHandler;
- (void)dealloc;
- (id)expandedRecipients;
- (BOOL)homogenizePreferredServiceForiMessage;
- (BOOL)peoplePickerShouldUsePopovers;
- (id)proposedRecipients;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (BOOL)searchListShouldUsePopvoers;
- (id)sendBlock;
- (void)setSendBlock:(id)arg1;
- (BOOL)shouldAtomizeToConversationName;
- (BOOL)shouldSuppressSearchResultsTable;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end

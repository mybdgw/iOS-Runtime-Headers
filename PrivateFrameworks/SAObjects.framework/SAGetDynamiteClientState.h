/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SADynamiteClientState;

@interface SAGetDynamiteClientState : SABaseClientBoundCommand <SAGetSingleClientState> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(retain) SADynamiteClientState * clientState;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)getDynamiteClientState;
+ (id)getDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setClientState:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString;

@interface PKPassNumberField : PKPassField {
    NSString *_currencyCode;
    int _numberStyle;
}

@property(copy) NSString * currencyCode;
@property int numberStyle;

+ (BOOL)supportsSecureCoding;

- (id)currencyCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)numberStyle;
- (void)setCurrencyCode:(id)arg1;
- (void)setNumberStyle:(int)arg1;
- (id)value;

@end

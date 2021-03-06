/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
    UITableViewCell *_cell;
    float _height;
    int _indentationLevel;
}

@property(retain) UITableViewCell * cell;
@property float height;

+ (id)row;

- (id)cell;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (float)height;
- (int)indentationLevel;
- (id)initWithCoder:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setIndentationLevel:(int)arg1;

@end

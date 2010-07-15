/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableCell.h"

@class NSString, UIImageView, UIFont;

@interface UISimpleTableCell : UITableCell {
@private
	UIFont* _font;
	UIImageView* _iconImageView;
	unsigned _indentationLevel;
@protected
	NSString* _title;
	int _titleColor;
}
+(id)defaultFont;
-(id)initWithFrame:(CGRect)frame;
-(void)setFont:(id)font;
-(id)font;
-(void)dealloc;
-(void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;
-(void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(void)setTitle:(id)title;
-(id)title;
-(void)setTitleColor:(int)color;
-(id)iconImageView;
-(void)layoutSubviews;
-(void)setIcon:(id)icon;
-(id)icon;
-(void)setIndentationLevel:(unsigned)level;
-(unsigned)indentationLevel;
-(int)lineBreakMode;
-(id)_scriptingInfo;
@end


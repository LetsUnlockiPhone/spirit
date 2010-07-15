/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldBackgroundView : UIView {
@private
	BOOL _active;
	float _progress;
}
-(void)_updateImages;
-(id)initWithFrame:(CGRect)frame active:(BOOL)active;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)setActive:(BOOL)active;
-(void)setProgress:(float)progress;
-(BOOL)ignoresMouseEvents;
@end

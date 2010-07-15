/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView : UIView {
@private
	UIImage* _image;
}
+(id)topShadowImage;
+(id)bottomShadowImage;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)ignoresMouseEvents;
-(void)setShadowImage:(id)image forEdge:(int)edge inside:(BOOL)inside;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICGColor : UIColor {
@private
	CGColorRef cachedColor;
}
-(id)initWithCGColor:(CGColorRef)cgcolor;
-(void)dealloc;
-(id)colorWithAlphaComponent:(float)alphaComponent;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(id)colorSpaceName;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(CGColorRef)CGColor;
@end


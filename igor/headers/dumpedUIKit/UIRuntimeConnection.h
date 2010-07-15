/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding> {
@private
	id source;
	id destination;
	NSString* label;
}
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)source;
-(void)setSource:(id)source;
-(id)destination;
-(void)setDestination:(id)destination;
-(id)label;
-(void)setLabel:(id)label;
-(void)connect;
-(void)connectForSimulator;
@end


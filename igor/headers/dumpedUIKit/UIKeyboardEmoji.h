/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmoji : NSObject {
@private
	NSString* _name;
	NSString* _imageName;
	NSString* _codePoint;
	unsigned short _unicodeCharacter;
}
@property(retain) NSString* name;
@property(retain) NSString* imageName;
@property(retain) NSString* codePoint;
@property(assign) unsigned short unicodeCharacter;
-(id)initWithName:(id)name imageName:(id)name2 codePoint:(unsigned short)point;
-(id)image;
-(void)dealloc;
@end


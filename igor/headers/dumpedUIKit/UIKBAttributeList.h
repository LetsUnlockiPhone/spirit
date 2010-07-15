/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <Foundation/NSObject.h>
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSArray, NSMutableArray, NSString;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
	NSString* m_name;
	NSMutableArray* m_list;
	BOOL m_explicit;
}
@property(copy, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSArray* list;
@property(assign, nonatomic) BOOL explicit;
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) NSArray* names;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)setAttribute:(id)attribute;
-(void)setValue:(id)value forName:(id)name;
-(void)setBoolValueForName:(BOOL)name forName:(id)name2;
-(void)mergeAttributes:(id)attributes;
-(id)valueForName:(id)name;
-(id)stringValueForName:(id)name;
-(BOOL)boolValueForName:(id)name;
-(id)arrayValueForName:(id)name;
@end

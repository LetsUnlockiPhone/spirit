/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>

@class UIView, UIControl, UIRemoveControl;

__attribute__((visibility("hidden")))
@interface _UITableViewCellOldEditingData : NSObject {
@private
	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;
}
@property(retain, nonatomic) UIControl* reorderControl;
@property(retain, nonatomic) UIView* separatorView;
-(BOOL)dataRequired;
-(void)dealloc;
@end


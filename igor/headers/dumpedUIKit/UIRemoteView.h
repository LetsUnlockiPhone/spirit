/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIRemoteWindow;

@interface UIRemoteView : UIView {
	NSString* _remoteViewIdentifier;
	UIRemoteWindow* _remoteWindow;
	BOOL _captureAllWindows;
}
-(id)initWithFrame:(CGRect)frame captureAllWindows:(BOOL)windows;
-(void)registerWithIdentifier:(id)identifier;
-(void)dealloc;
-(void)unregister;
-(id)remoteViewIdentifier;
@end


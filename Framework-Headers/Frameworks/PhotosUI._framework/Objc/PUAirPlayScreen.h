//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/_UISettingsKeyObserver-Protocol.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject <_UISettingsKeyObserver>
{
    UIScreen *_screen;
    NSString *_identifier;
    unsigned long long _type;
    UIViewController *_rootViewController;
    UIWindow *__window;
    struct CGSize _size;
}

@property (readonly, nonatomic) NSString *_typeName;
@property (strong, nonatomic, setter=_setWindow:) UIWindow *_window; // @synthesize _window=__window;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long placeholderType;
@property (strong, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (strong, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_setIdentifier:(id)arg1;
- (void)_setScreen:(id)arg1;
- (void)_setSize:(struct CGSize)arg1;
- (void)_setType:(unsigned long long)arg1;
- (void)_updateWindow;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAirPlayScreen:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

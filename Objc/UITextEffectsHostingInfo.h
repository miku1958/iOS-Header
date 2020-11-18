//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSString, UIScreen;

@interface UITextEffectsHostingInfo : NSObject <_UIScreenBasedObject>
{
    unsigned long long _hostedUseCount;
    UIScreen *_screen;
    NSDictionary *_perScreenOptions;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *perScreenOptions; // @synthesize perScreenOptions=_perScreenOptions;
@property (strong, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useHostedInstance;

+ (id)hostingInfoForScreen:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (BOOL)_matchingOptions:(id)arg1;

@end


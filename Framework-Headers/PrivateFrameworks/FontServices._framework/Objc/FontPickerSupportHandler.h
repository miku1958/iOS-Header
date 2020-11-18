//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FontServices/FontServicesFontPickerSupportProtocol-Protocol.h>
#import <FontServices/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)locallyActivatedFontFiles:(CDUnknownBlockType)arg1;
- (void)ping:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

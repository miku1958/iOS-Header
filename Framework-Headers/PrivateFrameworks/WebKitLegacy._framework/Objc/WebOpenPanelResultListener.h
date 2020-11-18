//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebOpenPanelResultListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>
{
    struct FileChooser *_chooser;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)chooseFilename:(id)arg1;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (id)initWithChooser:(PassRefPtr_2f7011b9)arg1;

@end


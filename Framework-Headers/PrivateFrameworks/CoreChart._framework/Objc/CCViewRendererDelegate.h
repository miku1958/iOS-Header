//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreChart/CCViewRendererDelegateInterface-Protocol.h>

@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface>
{
    CCVegaRenderer *vegaRenderer;
}

@property (weak) CCVegaRenderer *vegaRenderer; // @synthesize vegaRenderer;

- (void).cxx_destruct;
- (id)initWithVegaRenderer:(id)arg1;
- (void)loadURL:(id)arg1 options:(id)arg2 withCallback:(id)arg3;
- (void)updateNativeView;

@end


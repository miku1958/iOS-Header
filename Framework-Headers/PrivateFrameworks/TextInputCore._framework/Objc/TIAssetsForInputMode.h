//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject
{
    NSMutableDictionary *_assetsByInputModeLevel;
    NSString *_inputMode;
}

@property (readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;

- (void).cxx_destruct;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;
- (id)recursiveDescription;
- (void)removeAllInputModeLevels;

@end


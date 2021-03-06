//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitEnvironment.h>

@class NSDictionary;

@interface EQKitEnvironmentInstance : EQKitEnvironment
{
    NSDictionary *mConfig;
    struct Dictionary *mOperatorDictionary;
    struct Manager {
        CDUnknownFunctionPointerType *;
        struct Collection *;
        struct EQKitCacheLRUCounter;
    } *mFontManager;
    struct Manager {
        struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path>> *;
        struct EQKitCacheLRUCounter;
        BOOL;
        struct QuantizationConfig;
    } *mKerningManager;
    struct Config *mLayoutConfig;
}

@property (nonatomic) BOOL kerning;

+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;
- (void)beginLayout;
- (void)dealloc;
- (void)endLayout;
- (const Manager_e51557f8 *)fontManager;
- (id)initWithConfig:(id)arg1;
- (const Manager_36464627 *)kerningManager;
- (const struct Config *)layoutConfig;
- (id)newDictionaryForArchiving;
- (const struct Dictionary *)operatorDictionary;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKVKImageSourceCalculationParameters, NSArray, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MKVKImageSourceKeyImageResult : NSObject
{
    NSMutableArray *_mutableFullBleedColors;
    BOOL _sameFullBleedColors;
    MKVKImageSourceCalculationParameters *_parameters;
    NSMutableArray *_triedKeys;
    NSMutableArray *_mutableImages;
    NSMutableSet *_imageDatas;
}

@property (readonly, nonatomic) NSArray *fullBleedColors;
@property (strong, nonatomic) NSMutableSet *imageDatas; // @synthesize imageDatas=_imageDatas;
@property (readonly, nonatomic) NSArray *images;
@property (strong, nonatomic) NSMutableArray *mutableImages; // @synthesize mutableImages=_mutableImages;
@property (readonly, nonatomic) MKVKImageSourceCalculationParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic, getter=hasSameFullBleedColors) BOOL sameFullBleedColors; // @synthesize sameFullBleedColors=_sameFullBleedColors;
@property (strong, nonatomic) NSMutableArray *triedKeys; // @synthesize triedKeys=_triedKeys;

- (void).cxx_destruct;
- (void)addFullBleedColor:(id)arg1;
- (id)initWithParameters:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying>
{
    NSArray *_scopedModelNames;
    NSString *_layerName;
}

@property (copy, nonatomic) NSString *layerName; // @synthesize layerName=_layerName;
@property (copy, nonatomic) NSArray *scopedModelNames; // @synthesize scopedModelNames=_scopedModelNames;

- (void).cxx_destruct;
- (void)appendPathComponent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMLLayerPath:(id)arg1;

@end


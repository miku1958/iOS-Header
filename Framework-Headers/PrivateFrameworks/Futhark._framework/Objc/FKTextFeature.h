//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface FKTextFeature : NSObject
{
    void *_backingObject;
    CDStruct_a2151f1f *_session;
    int _scale;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

@property (readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property (readonly, strong, nonatomic) NSArray *corners; // @synthesize corners=_corners;
@property (readonly, nonatomic) long long featureID; // @synthesize featureID=_featureID;
@property (strong, nonatomic) NSArray *subFeatures; // @synthesize subFeatures=_subFeatures;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)featureFromConcomp:(struct concomp *)arg1 session:(CDStruct_a2151f1f *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long *)arg7 scale:(int)arg8;
+ (id)featureFromSequenceIndex:(int)arg1 session:(CDStruct_a2151f1f *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 createConcompFeatures:(BOOL)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long *)arg7 scale:(int)arg8;
- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(CDStruct_a2151f1f *)arg5 backingObject:(void *)arg6 scale:(int)arg7;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FKTextFeature : NSObject
{
    CDUnion_a5814135 _backingIndex;
    CDStruct_6a58b7ce *_session;
    int _scale;
    long long _featureID;
    NSArray *_corners;
    long long _type;
    NSString *_text;
    NSArray *_subFeatures;
    struct CGRect _boundingBox;
}

@property (readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property (readonly, strong, nonatomic) NSArray *corners; // @synthesize corners=_corners;
@property (readonly, nonatomic) long long featureID; // @synthesize featureID=_featureID;
@property (strong, nonatomic) NSArray *subFeatures; // @synthesize subFeatures=_subFeatures;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)featureFromConcompIndex:(int)arg1 session:(CDStruct_6a58b7ce *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long *)arg7 scale:(int)arg8;
+ (id)featureFromSequenceIndex:(int)arg1 session:(CDStruct_6a58b7ce *)arg2 roiOffset:(struct CGPoint)arg3 dimensions:(struct CGSize)arg4 createConcompFeatures:(BOOL)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long *)arg7 scale:(int)arg8;
- (void)dealloc;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect *)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(CDStruct_6a58b7ce *)arg5 backingIndex:(CDUnion_a5814135)arg6 scale:(int)arg7;

@end


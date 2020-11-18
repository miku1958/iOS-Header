//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate;

@interface PHMoment : PHAssetCollection
{
    NSData *_approximateLocationData;
    NSData *_reverseLocationData;
    BOOL _reverseLocationDataIsValid;
    BOOL _reverseLocationDataContainsLocation;
    short _generationType;
    NSDate *_representativeDate;
    NSDate *_modificationDate;
}

@property (readonly, nonatomic) short generationType; // @synthesize generationType=_generationType;
@property (readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (readonly, nonatomic) NSDate *representativeDate; // @synthesize representativeDate=_representativeDate;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
- (void).cxx_destruct;
- (void)_decodeTitlesIfNeeded;
- (id)approximateLocation;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (BOOL)canShowAvalancheStacks;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;

@end

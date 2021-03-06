//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <KeynoteQuicklook/TSSPropertySource-Protocol.h>

@class KNMasterSlide, KNSlideStyle, NSArray, NSDictionary, NSString, NSUUID;

@interface KNPrototypeForUndoMasterChange : TSPObject <TSSPropertySource>
{
    KNSlideStyle *_style;
    NSUUID *_masterSlideId;
    NSArray *_drawableInfoIdList;
    NSArray *_placeholders;
    NSArray *_placeholderTagsList;
    NSArray *_childInfos;
    NSDictionary *_placeholdersForTags;
}

@property (readonly, nonatomic) NSArray *childInfos; // @synthesize childInfos=_childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) KNMasterSlide *master;
@property (readonly, nonatomic) NSArray *placeholders; // @synthesize placeholders=_placeholders;
@property (readonly, nonatomic) NSDictionary *placeholdersForTags; // @synthesize placeholdersForTags=_placeholdersForTags;
@property (strong, nonatomic) KNSlideStyle *slideStyle; // @synthesize slideStyle=_style;
@property (readonly) Class superclass;

+ (id)blobWithSlide:(id)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)initWithSlide:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)migrateStyles;
- (id)objectForProperty:(int)arg1;
- (void)rebuildChildInfosAndPlaceholdersFromMaster:(id)arg1;
- (void)saveToArchive:(struct PrototypeForUndoMasterChangeArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end


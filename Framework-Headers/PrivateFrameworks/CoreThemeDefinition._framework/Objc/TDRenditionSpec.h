//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject
{
}

@property (nonatomic) BOOL alphaCrop; // @dynamic alphaCrop;
@property (strong, nonatomic) NSDate *dateOfLastChange; // @dynamic dateOfLastChange;
@property (nonatomic) int height; // @dynamic height;
@property (strong, nonatomic) TDRenditionKeySpec *keySpec; // @dynamic keySpec;
@property (nonatomic) BOOL monochrome; // @dynamic monochrome;
@property (nonatomic) BOOL opaque; // @dynamic opaque;
@property (nonatomic) struct CGPoint packedPoint;
@property (nonatomic) int packedPointX; // @dynamic packedPointX;
@property (nonatomic) int packedPointY; // @dynamic packedPointY;
@property (strong, nonatomic) NSSet *packedRenditions; // @dynamic packedRenditions;
@property (strong, nonatomic) TDRenditionSpec *parentRendition; // @dynamic parentRendition;
@property (strong, nonatomic) TDElementProduction *production; // @dynamic production;
@property (strong, nonatomic) NSSet *properties; // @dynamic properties;
@property (strong, nonatomic) TDRenditionType *renditionType; // @dynamic renditionType;
@property (nonatomic) int width; // @dynamic width;

- (void)awakeFromInsert;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (id)propertiesAsDictionary;
- (void)resetToBaseKeySpec;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;

@end


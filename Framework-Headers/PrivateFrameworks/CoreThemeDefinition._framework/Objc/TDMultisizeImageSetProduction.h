//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDNamedArtworkProduction.h>

@class NSSet;

@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction
{
}

@property (strong, nonatomic) NSSet *multisizeImageSetRenditions; // @dynamic multisizeImageSetRenditions;
@property (strong, nonatomic) NSSet *sizeIndexes; // @dynamic sizeIndexes;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)processRendition:(id)arg1 withBackstop:(id)arg2;

@end

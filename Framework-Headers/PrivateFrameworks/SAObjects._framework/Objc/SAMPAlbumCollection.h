//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection
{
}

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)albumCollection;
+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


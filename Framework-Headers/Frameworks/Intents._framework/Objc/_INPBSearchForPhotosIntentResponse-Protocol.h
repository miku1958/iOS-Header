//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocation;

@protocol _INPBSearchForPhotosIntentResponse <NSObject>

@property (copy, nonatomic) NSString *albumName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (nonatomic) BOOL hasSearchResultsCount;
@property (strong, nonatomic) _INPBLocation *locationCreated;
@property (nonatomic) int searchResultsCount;

@end


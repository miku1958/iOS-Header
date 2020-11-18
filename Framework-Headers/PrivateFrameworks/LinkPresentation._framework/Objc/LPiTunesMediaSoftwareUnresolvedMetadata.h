//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaUnresolvedMetadata-Protocol.h>

@class LPiTunesMediaAsset, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_genre;
    NSString *_platform;
    NSNumber *_isHiddenFromSpringboard;
    NSNumber *_hasMessagesExtension;
    LPiTunesMediaAsset *_icon;
    LPiTunesMediaAsset *_messagesAppIcon;
    NSArray *_screenshots;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSNumber *hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LPiTunesMediaAsset *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSNumber *isHiddenFromSpringboard; // @synthesize isHiddenFromSpringboard=_isHiddenFromSpringboard;
@property (strong, nonatomic) LPiTunesMediaAsset *messagesAppIcon; // @synthesize messagesAppIcon=_messagesAppIcon;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property (strong, nonatomic) NSArray *screenshots; // @synthesize screenshots=_screenshots;
@property (copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetsToResolve;
- (id)resolve;

@end


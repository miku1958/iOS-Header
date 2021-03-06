//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPArtworkDataSourceVisualIdenticality-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>
{
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
}

@property (readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property (readonly, nonatomic) NSString *availableArtworkToken; // @synthesize availableArtworkToken=_availableArtworkToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fetchableArtworkToken; // @synthesize fetchableArtworkToken=_fetchableArtworkToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)stringRepresentation;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibraryArtworkDataSource, MPMediaLibraryArtworkRequest;

@interface MPMediaChapter : NSObject
{
    long long _chapterType;
    unsigned long long _indexInChaptersWithAnyType;
    unsigned long long _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    CDUnknownBlockType _valueLoader;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    MPMediaLibraryArtworkDataSource *_artworkDataSource;
}

@property (weak, nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
@property (strong, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // @synthesize artworkRequest=_artworkRequest;
@property (nonatomic) long long chapterType; // @synthesize chapterType=_chapterType;
@property (nonatomic) unsigned long long indexInChaptersWithAnyType; // @synthesize indexInChaptersWithAnyType=_indexInChaptersWithAnyType;
@property (nonatomic) unsigned long long indexInChaptersWithSameType; // @synthesize indexInChaptersWithSameType=_indexInChaptersWithSameType;
@property (nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property (nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property (strong, nonatomic) id value; // @synthesize value=_value;
@property (copy, nonatomic) CDUnknownBlockType valueLoader; // @synthesize valueLoader=_valueLoader;

- (void).cxx_destruct;
- (long long)_sortByChapterIndex:(id)arg1;
- (id)artworkCatalog;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;

@end

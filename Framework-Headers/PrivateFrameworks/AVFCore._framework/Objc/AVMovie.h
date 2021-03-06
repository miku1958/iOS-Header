//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAsset.h>

#import <AVFCore/NSCopying-Protocol.h>
#import <AVFCore/NSMutableCopying-Protocol.h>

@class AVMediaDataStorage, AVMovieInternal, NSArray, NSData, NSURL;

@interface AVMovie : AVAsset <NSCopying, NSMutableCopying>
{
    AVMovieInternal *_movie;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL canContainMovieFragments;
@property (readonly, nonatomic) BOOL containsMovieFragments;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property (readonly, nonatomic) NSArray *tracks;

+ (BOOL)expectsPropertyRevisedNotifications;
+ (void)initialize;
+ (id)movieTypes;
+ (id)movieWithData:(id)arg1 options:(id)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (id)_absoluteURL;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForMovieTracks;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigMutableMovie *)_figMutableMovie;
- (struct OpaqueFigMutableMovie *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader *)arg1;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)_initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)_initializationOptions;
- (struct OpaqueFigMutableMovie *)_mutableMovieForFileType:(id)arg1;
- (void)_startListeningToLoaderNotifications;
- (void)_stopListeningToLoaderNotifications;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasProtectedContent;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompatibleWithFileType:(id)arg1;
- (id)movieHeaderWithFileType:(id)arg1 error:(id *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceRestrictions;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (BOOL)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;

@end


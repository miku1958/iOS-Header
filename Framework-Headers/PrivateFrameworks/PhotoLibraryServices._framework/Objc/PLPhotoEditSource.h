//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLEditSource.h>

@interface PLPhotoEditSource : PLEditSource
{
    BOOL _isRAWSource;
}

- (id)initWithURL:(id)arg1 type:(id)arg2 image:(id)arg3 useEmbeddedPreview:(BOOL)arg4;
- (BOOL)isRAWSource;
- (id)newSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(BOOL)arg3;

@end

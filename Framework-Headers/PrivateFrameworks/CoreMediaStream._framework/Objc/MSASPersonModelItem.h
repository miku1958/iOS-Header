//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCopying-Protocol.h>

@class MSASAlbum, NSString;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying>
{
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    id<NSObject> _object;
}

@property (strong, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property (strong, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property (nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
@property (strong, nonatomic) id<NSObject> object; // @synthesize object=_object;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

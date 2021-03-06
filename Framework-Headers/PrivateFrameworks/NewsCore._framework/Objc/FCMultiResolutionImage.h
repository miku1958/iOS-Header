//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying>
{
    NSURL *_imageURL1x;
    NSURL *_imageURL2x;
    NSURL *_imageURL3x;
}

@property (strong, nonatomic) NSURL *imageURL1x; // @synthesize imageURL1x=_imageURL1x;
@property (strong, nonatomic) NSURL *imageURL2x; // @synthesize imageURL2x=_imageURL2x;
@property (strong, nonatomic) NSURL *imageURL3x; // @synthesize imageURL3x=_imageURL3x;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end


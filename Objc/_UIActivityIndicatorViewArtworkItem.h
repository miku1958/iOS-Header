//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSDiscardableContent-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent>
{
    NSString *_artKey;
    NSArray *_images;
    struct {
        unsigned int isDiscarded:1;
        unsigned int useCount;
    } _flags;
}

@property (readonly, nonatomic) NSString *artKey; // @synthesize artKey=_artKey;
@property (strong, nonatomic) NSArray *images; // @synthesize images=_images;

- (void).cxx_destruct;
- (BOOL)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (unsigned long long)hash;
- (id)initWithArtKey:(id)arg1;
- (BOOL)isContentDiscarded;

@end


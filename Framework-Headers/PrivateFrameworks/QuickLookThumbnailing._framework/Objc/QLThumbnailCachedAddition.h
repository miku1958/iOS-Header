//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition *_addition;
    unsigned long long _fileID;
}

@property (strong) GSAddition *addition; // @synthesize addition=_addition;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAddition:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStillValid;

@end

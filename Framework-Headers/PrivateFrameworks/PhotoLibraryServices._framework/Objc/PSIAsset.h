//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PSIObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>
{
    PSIDate *_creationDate;
}

@property (readonly) PSIDate *creationDate; // @synthesize creationDate=_creationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 creationDate:(id)arg2;

@end


//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISConcreteImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface ISCacheImage : ISConcreteImage
{
    NSUUID *_uuid;
    struct NSData *_validationToken;
}

@property BOOL placeholder; // @dynamic placeholder;
@property (strong) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (readonly) NSData *validationToken; // @synthesize validationToken=_validationToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

@end

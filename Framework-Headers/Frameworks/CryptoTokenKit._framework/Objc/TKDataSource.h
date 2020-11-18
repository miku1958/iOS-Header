//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface TKDataSource : NSObject
{
    NSData *_data;
    const char *_ptr;
}

@property (readonly) NSData *data;
@property (readonly) const char *end;
@property (readonly) const char *ptr; // @synthesize ptr=_ptr;

- (void).cxx_destruct;
- (BOOL)bytesSafeToRead:(long long)arg1;
- (unsigned char)fetchByte;
- (id)fetchDataWithLength:(long long)arg1;
- (id)initWithData:(id)arg1;

@end

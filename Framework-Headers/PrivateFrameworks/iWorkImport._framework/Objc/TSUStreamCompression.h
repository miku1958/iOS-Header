//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUStreamCompression : NSObject
{
    int _status;
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;
    int _operation;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)didFinishProcessing;
- (id)initWithAlgorithm:(int)arg1 operation:(int)arg2;
- (BOOL)processBytes:(char *)arg1 size:(unsigned long long)arg2;
- (BOOL)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;

@end


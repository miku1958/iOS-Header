//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSLibraryProtocol-Protocol.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage *_ts;
}

@property (readonly, nonatomic) NSString *nameSpace;
@property (readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

- (void)dealloc;
- (BOOL)generationsRemove:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end


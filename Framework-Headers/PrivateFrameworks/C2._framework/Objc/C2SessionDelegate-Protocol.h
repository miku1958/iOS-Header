//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <C2/NSObject-Protocol.h>

@class C2Session, NSError, NSString;

@protocol C2SessionDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
- (void)C2Session:(C2Session *)arg1 originalHost:(NSString *)arg2 updatedRoute:(NSString *)arg3;
@end


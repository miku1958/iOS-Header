//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccessUI/NSObject-Protocol.h>

@class DAAccount, NSError;

@protocol DAValidityCheckConsumer <NSObject>
- (void)account:(DAAccount *)arg1 isValid:(BOOL)arg2 validationError:(NSError *)arg3;
@end


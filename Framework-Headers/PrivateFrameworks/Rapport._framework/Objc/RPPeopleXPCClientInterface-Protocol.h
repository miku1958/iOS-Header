//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class RPPerson;

@protocol RPPeopleXPCClientInterface

@optional
- (void)xpcPersonChanged:(RPPerson *)arg1 changes:(unsigned int)arg2;
- (void)xpcPersonFound:(RPPerson *)arg1;
- (void)xpcPersonLost:(RPPerson *)arg1;
@end


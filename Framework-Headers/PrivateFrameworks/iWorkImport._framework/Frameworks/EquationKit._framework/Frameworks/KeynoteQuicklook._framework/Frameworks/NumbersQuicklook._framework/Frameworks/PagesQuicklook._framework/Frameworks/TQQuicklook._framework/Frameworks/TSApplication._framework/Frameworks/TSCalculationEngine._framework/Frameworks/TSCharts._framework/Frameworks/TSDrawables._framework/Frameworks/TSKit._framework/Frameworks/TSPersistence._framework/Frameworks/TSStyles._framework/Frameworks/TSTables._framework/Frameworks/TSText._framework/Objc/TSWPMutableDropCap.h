//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPDropCap.h>

@interface TSWPMutableDropCap : TSWPDropCap
{
}

@property (nonatomic) double characterScale; // @dynamic characterScale;
@property (nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property (nonatomic) long long dropCapType; // @dynamic dropCapType;
@property (nonatomic) unsigned long long numberOfCharacters; // @dynamic numberOfCharacters;
@property (nonatomic) unsigned long long numberOfLines; // @dynamic numberOfLines;
@property (nonatomic) unsigned long long numberOfRaisedLines; // @dynamic numberOfRaisedLines;
@property (nonatomic) double outdent; // @dynamic outdent;
@property (nonatomic) double padding; // @dynamic padding;
@property (nonatomic) BOOL shapeEnabled; // @dynamic shapeEnabled;
@property (nonatomic) long long wrapType; // @dynamic wrapType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromDropCap:(id)arg1;

@end

//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingUndoCheckPoint, NSArray, NSString;

@interface ICDrawingUndoCommand : NSObject
{
    BOOL _hide;
    NSArray *_commands;
    NSString *_actionName;
    ICDrawingUndoCheckPoint *_checkPoint;
}

@property (strong, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property (strong, nonatomic) ICDrawingUndoCheckPoint *checkPoint; // @synthesize checkPoint=_checkPoint;
@property (strong, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property (nonatomic) BOOL hide; // @synthesize hide=_hide;
@property (readonly, nonatomic) NSArray *visibleCommands;

- (void).cxx_destruct;
- (double)renderCost;

@end

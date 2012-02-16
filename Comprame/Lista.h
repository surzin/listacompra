//
//  Lista.h
//  Comprame
//
//  Created by Antonio Gil Sánchez on 09/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Lista : NSManagedObject

@property (nonatomic, retain) NSNumber * id_list;
@property (nonatomic, retain) NSString * nombre_list;
@property (nonatomic, retain) NSDate * fecha_list;

@end

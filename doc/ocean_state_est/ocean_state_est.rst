Ocean State Estimation Packages
*******************************

[chap.ecco]

This chapter describes packages that have been introduced for ocean
state estimation purposes and in relation with automatic differentiation
(see Chapter \ `[chap:autodiff] <#chap:autodiff>`__)

.. _sec:pkg:ecco:

ECCO: model-data comparisons using gridded data sets
----------------------------------------------------

The functionalities implemented in ``pkg/ecco`` are: (1) output
time-averaged model fields to compare with gridded data sets; (2)
compute normalized model-data distances (i.e., cost functions); (3)
compute averages and transports (i.e., integrals). The former is
achieved as the model runs forwards in time whereas the others occur
after time-integration has completed. Following
:raw-latex:`\cite{for-eta:15}` the total cost function is formulated
generically as


